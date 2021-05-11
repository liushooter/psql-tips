<!DOCTYPE html>
<html lang="en-us">
<head>
  <meta name="generator" content=
  "HTML Tidy for HTML5 for Apple macOS version 5.6.0">
  <meta charset="utf-8">
  <meta name="viewport" content=
  "width=device-width, initial-scale=1">
  <title>psql Tips</title>
  <style>

    html body {
        font-family: 'Raleway', sans-serif;
        background-color: white;
    }

    :root {
        --accent: #3d85c6;
        --border-width:  5px ;
    }

  </style>
  <link rel="stylesheet" href=
  "https://mydbanotebook.org/css/main.css"><!-- Titianette -->
  <link rel="stylesheet" href="css/laetitia.css">
  <link rel="stylesheet" href=
  "https://fonts.googleapis.com/css?family=Raleway">
  <link rel="stylesheet" href=
  "https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/styles/agate.min.css">
  <link rel="stylesheet" href=
  "https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css"
  integrity=
  "sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u"
  crossorigin="anonymous">
  <link rel="stylesheet" href=
  "https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css"
  integrity=
  "sha384-wvfXpqpZZVQGK6TAh5PVlGOfQNHSoD2xbE+QkPxCAFlNEevoEH3Sl0sibVcOQVnN"
  crossorigin="anonymous">
  <script src=
  "https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/highlight.min.js"></script>
  <script src=
  "https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/languages/sql.min.js"></script>
  <script src=
  "https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/languages/shell.min.js"></script>
  <script src=
  "https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/languages/C.min.js"></script>
  <script src=
  "https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/languages/XML.min.js"></script>
  <script>
  hljs.initHighlightingOnLoad();
  </script>
  <script src=
  "https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
  <script src=
  "https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"
  integrity=
  "sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa"
  crossorigin="anonymous"></script>
  <script>
  $(document).on('click', function() { $('.collapse').collapse('hide');
  })
  </script>
  <meta name="generator" content="Hugo 0.56.3">
  <link href="https://mydbanotebook.org/slides/index.xml" rel=
  "alternate" type="application/rss+xml" title="My DBA Notebook">
  <link href="https://mydbanotebook.org/slides/index.xml" rel=
  "feed" type="application/rss+xml" title="My DBA Notebook">
  <script type="text/javascript" async src=
  "https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.1/MathJax.js?config=TeX-AMS-MML_HTMLorMML"></script>
  <style type="text/css">
  .MathJax_Hover_Frame {border-radius: .25em;
  -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius:
  .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A;
  -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A;
  border: 1px solid #A6D ! important; display: inline-block; position: absolute}
  .MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer;
  display: inline-block; border: 2px solid #AAA; border-radius: 4px;
  -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px;
  font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
  .MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block;
  background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0;
  padding: 4px}
  .MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid
  #CCC!important}
  .MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
  </style>
  <style type="text/css">
  #MathJax_About {position: fixed; left: 50%;
  width: auto; text-align: center; border: 3px outset; padding: 1em 2em;
  background-color: #DDDDDD; color: black; cursor: default; font-family:
  message-box; font-size: 120%; font-style: normal; text-indent: 0;
  text-transform: none; line-height: normal; letter-spacing: normal; word-spacing:
  normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201;
  border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px;
  -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080;
  -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px
  #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter:
  progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray',
  Positive='true')}
  #MathJax_About.MathJax_MousePost {outline: none}
  .MathJax_Menu {position: absolute; background-color: white; color: black; width:
  auto; padding: 5px 0px; border: 1px solid #CCCCCC; margin: 0; cursor: default;
  font: menu; text-align: left; text-indent: 0; text-transform: none; line-height:
  normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal;
  white-space: nowrap; float: none; z-index: 201; border-radius: 5px;
  -webkit-border-radius: 5px; -moz-border-radius: 5px; -khtml-border-radius: 5px;
  box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080;
  -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px
  #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2,
  Color='gray', Positive='true')}
  .MathJax_MenuItem {padding: 1px 2em; background: transparent}
  .MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color:
  #666666; font-size: .75em}
  .MathJax_MenuActive .MathJax_MenuArrow {color: white}
  .MathJax_MenuArrow.RTL {left: .5em; right: auto}
  .MathJax_MenuCheck {position: absolute; left: .7em}
  .MathJax_MenuCheck.RTL {right: .7em; left: auto}
  .MathJax_MenuRadioCheck {position: absolute; left: .7em}
  .MathJax_MenuRadioCheck.RTL {right: .7em; left: auto}
  .MathJax_MenuLabel {padding: 1px 2em 3px 1.33em; font-style: italic}
  .MathJax_MenuRule {border-top: 1px solid #DDDDDD; margin: 4px 3px}
  .MathJax_MenuDisabled {color: GrayText}
  .MathJax_MenuActive {background-color: #606872; color: white}
  .MathJax_MenuDisabled:focus, .MathJax_MenuLabel:focus {background-color:
  #E8E8E8}
  .MathJax_ContextMenu:focus {outline: none}
  .MathJax_ContextMenu .MathJax_MenuItem:focus {outline: none}
  #MathJax_AboutClose {top: .2em; right: .2em}
  .MathJax_Menu .MathJax_MenuClose {top: -10px; left: -10px}
  .MathJax_MenuClose {position: absolute; cursor: pointer; display: inline-block;
  border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px;
  -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier
  New',Courier; font-size: 24px; color: #F0F0F0}
  .MathJax_MenuClose span {display: block; background-color: #AAA; border: 1.5px
  solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius:
  18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
  .MathJax_MenuClose:hover {color: white!important; border: 2px solid
  #CCC!important}
  .MathJax_MenuClose:hover span {background-color: #CCC!important}
  .MathJax_MenuClose:hover:focus {outline: none}
  </style>
  <style type="text/css">
  .MathJax_Preview .MJXf-math {color:
  inherit!important}
  </style>
  <style type="text/css">
  .MJX_Assistive_MathML {position:
  absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding:
  1px 0 0 0!important; border: 0!important; height: 1px!important; width:
  1px!important; overflow: hidden!important; display: block!important;
  -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select:
  none; -moz-user-select: none; -ms-user-select: none; user-select: none}
  .MJX_Assistive_MathML.MJX_Assistive_MathML_Block {width: 100%!important}
  </style>
  <style type="text/css">
  #MathJax_Zoom {position: absolute;
  background-color: #F0F0F0; overflow: auto; display: block; z-index: 301;
  padding: .5em; border: 1px solid black; margin: 0; font-weight: normal;
  font-style: normal; text-align: left; text-indent: 0; text-transform: none;
  line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap:
  normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box;
  -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px
  #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px
  #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter:
  progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray',
  Positive='true')}
  #MathJax_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300;
  display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin:
  0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
  #MathJax_ZoomFrame {position: relative; display: inline-block; height: 0; width:
  0}
  #MathJax_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302;
  display: inline-block; border: 0; padding: 0; margin: 0; background-color:
  white; opacity: 0; filter: alpha(opacity=0)}
  </style>
  <style type="text/css">
  .MathJax_Preview {color: #888}
  #MathJax_Message {position: fixed; left: 1em; bottom: 1.5em; background-color:
  #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102;
  color: black; font-size: 80%; width: auto; white-space: nowrap}
  #MathJax_MSIE_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index:
  101; border: 0px; margin: 0px; padding: 0px}
  .MathJax_Error {color: #CC0000; font-style: italic}
  </style>
  <style type="text/css">
  .MJXp-script {font-size: .8em}
  .MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right;
  -ms-transform-origin: right; -o-transform-origin: right; transform-origin:
  right}
  .MJXp-bold {font-weight: bold}
  .MJXp-italic {font-style: italic}
  .MJXp-scr {font-family: MathJax_Script,'Times New
  Roman',Times,STIXGeneral,serif}
  .MJXp-frak {font-family: MathJax_Fraktur,'Times New
  Roman',Times,STIXGeneral,serif}
  .MJXp-sf {font-family: MathJax_SansSerif,'Times New
  Roman',Times,STIXGeneral,serif}
  .MJXp-cal {font-family: MathJax_Caligraphic,'Times New
  Roman',Times,STIXGeneral,serif}
  .MJXp-mono {font-family: MathJax_Typewriter,'Times New
  Roman',Times,STIXGeneral,serif}
  .MJXp-largeop {font-size: 150%}
  .MJXp-largeop.MJXp-int {vertical-align: -.2em}
  .MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0;
  font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap;
  border-collapse: collapse}
  .MJXp-display {display: block; text-align: center; margin: 1em 0}
  .MJXp-math span {display: inline-block}
  .MJXp-box {display: block!important; text-align: center}
  .MJXp-box:after {content: " "}
  .MJXp-rule {display: block!important; margin-top: .1em}
  .MJXp-char {display: block!important}
  .MJXp-mo {margin: 0 .15em}
  .MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
  .MJXp-denom {display: inline-table!important; width: 100%}
  .MJXp-denom > * {display: table-row!important}
  .MJXp-surd {vertical-align: top}
  .MJXp-surd > * {display: block!important}
  .MJXp-script-box > *  {display: table!important; height: 50%}
  .MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
  .MJXp-script-box > *:last-child > * {vertical-align: bottom}
  .MJXp-script-box > * > * > * {display: block!important}
  .MJXp-mphantom {visibility: hidden}
  .MJXp-munderover {display: inline-table!important}
  .MJXp-over {display: inline-block!important; text-align: center}
  .MJXp-over > * {display: block!important}
  .MJXp-munderover > * {display: table-row!important}
  .MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
  .MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
  .MJXp-mtr {display: table-row!important}
  .MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0
  .5em}
  .MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
  .MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
  .MJXp-mlabeledtr {display: table-row!important}
  .MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
  .MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
  .MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid
  #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
  .MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0);
  -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
  .MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1);
  -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
  .MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2);
  -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
  .MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3);
  -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
  .MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4);
  -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
  .MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5);
  -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
  .MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6);
  -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
  .MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7);
  -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
  .MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8);
  -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
  .MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9);
  -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
  .MathJax_PHTML .noError {vertical-align: ; font-size: 90%; text-align: left;
  color: black; padding: 1px 3px; border: 1px solid}
  </style>
  <script>
    function pickATip()
    {
      const maxTipNumber = 95;
      var chosenOne=Math.floor(Math.random()*(maxTipNumber) + 1); //randomly pick one
      document.location = "psql_tips_" + chosenOne.toString().padStart(3,0) + ".html";
    }
  </script>
</head>
<body>
  <div id="MathJax_Message" style="display: none;"></div>
  <nav class="navbar navbar-default navbar-fixed-top">
    <div class="container">
      <div class="navbar-header">
        <a class="navbar-brand visible-xs" href="#">Conf talks</a>
      </div>
      <div class="collapse navbar-collapse">
        <ul class="nav navbar-nav">
          <li>
            <a href="/">Home</a>
          </li>
          <li>
            <a href="/post/">Posts</a>
          </li>
          <li>
            <a href="conf_talks.html">Conf Talks</a>
          </li>
          <li>
            <a href="psql_tips.html">Psql Tips</a>
          </li>
          <li>
            <a href="/sketchnotes/">Sketchnotes</a>
          </li>
        </ul>
        <ul class="nav navbar-nav navbar-right">
          <li class="navbar-icon">
            <a href="/about/me"></a>
          </li>
          <li class="navbar-icon">
            <a href="mailto:arkhena@gmail.com"></a>
          </li>
          <li class="navbar-icon">
            <a href="https://twitter.com/l_avrot/"></a>
          </li>
          <li class="navbar-icon">
            <a href=
            "https://www.linkedin.com/in/l%C3%A6titia-avrot/"></a>
          </li>
          <li class="navbar-icon">
            <a href=
            "https://dba.stackexchange.com/users/122828/arkhena"></a>
          </li>
        </ul>
      </div>
    </div>
  </nav>
  <main>