    <div class="tip">
	  Anything you enter in psql that begins with an unquoted backslash is
	  a psql meta-command that is processed by psql itself. Meta-commands are
	  often called slash or backslash commands.<br/>
	  <br/>
	  The format of a psql command is the backslash, followed immediately by
	  a command verb, then any arguments. The arguments are separated from the
	  command verb and each other by any number of whitespace characters.
      <pre><code class="hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \test
invalid command \test
Try \? for help.</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
