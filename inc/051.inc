    <div class="tip">
      You can customize the <code>psql</code> prompt with the host name of the database
	  server by
	  using the <code>%m</code> value.
      <pre><code class="hljs bash">laetitia:~$ psql -h myHost.myAwesomeDomain.com
psql (14devel)
Type "help" for help.

laetitia=# \set PROMPT1 '%m '
myHost </code></pre>This feature is available
since at least Postgres 7.1.
	</div>
