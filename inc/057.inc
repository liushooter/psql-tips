    <div class="tip">
	  The <code>[ ... %]</code> value can allow to customize the terminal exactly like your
	  terminal prompt.
      <pre><code class="hljs bash">laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \set PROMPT1 '%[%033[36m%]%n@%/%R%]%# '
# laetitia@laetitia=</code></pre>This code will color my terminal in cyan, as
you can see in the following image:<br/>
<img src="images/cyanTerminal.png" class="example"/>
<br/>This feature is available
since Postgres 8.0.
	</div>
