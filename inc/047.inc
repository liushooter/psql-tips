    <div class="tip">
	  The <code>psql</code> prompt will nicely and discreetly (as a real gentleman) remind
	  you a quote, a double quote or a parenthesis is open but not closed.
      <pre><code class="hljs bash">laetitia=# select '
laetitia'# 
laetitia=# select (
laetitia(# 
laetitia=# select "
laetitia"#</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
