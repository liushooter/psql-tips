    <div class="tip">
      You can customize the <code>psql</code> prompt with the full host name of the
	  database server by
	  using the <code>%M</code> value.
      <pre><code class="hljs bash">laetitia:~$ psql -h myHost.myAwesomeDomain.com
psql (14devel)
Type "help" for help.

laetitia=# \set PROMPT1 '%M '
myHost.myAwesomeDomain.com</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
