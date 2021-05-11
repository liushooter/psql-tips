    <div class="tip">
	  The <code>\C title</code> will allow you to set a title for your query. To unset
	  a title, just use <code>\C</code>.
      <pre><code class="hljs bash">laetitia=# \C 'test values'
Title is "test values".
laetitia=# select * from test;
test values
 id | value 
----&#43;-------
  1 | test
(1 row)

laetitia=# \C
Title is unset.
laetitia=# select * from test;
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
