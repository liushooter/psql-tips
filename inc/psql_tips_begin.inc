<!DOCTYPE html>
<html lang="en-us">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content=
  "width=device-width, initial-scale=1">
  <title>psql Tips</title>
  <link rel="stylesheet"
  href="https://cdn.rawgit.com/Chalarangelo/mini.css/v3.0.1/dist/mini-default.min.css">
  <link rel="stylesheet" href="css/laetitia.css">
  <link rel="stylesheet" href=
  "https://fonts.googleapis.com/css?family=Raleway">
  <link rel="stylesheet"
  href="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/styles/agate.min.css">
  <script
  src="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/highlight.min.js"></script>
  <script>hljs.highlightAll();</script>
  <script>
    function pickATip()
    {
      const maxTipNumber = 95;
      var chosenOne=Math.floor(Math.random()*(maxTipNumber) + 1); //randomly pick one
      document.location = "psql_tips_" + chosenOne.toString().padStart(3,0) + ".html";
    }
  </script>
</head>
<body class="Site">
  <header id="top"><h1><code>psql</code> Tips</h1></header>
  <main class="Site-content">
