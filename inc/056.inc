    <div class="tip">
	  The <code>psql</code> prompt can display the number of the line of your statement,
	  should you use the value <code>%l</code> when you set the prompt.
       <pre><code class="hljs bash">laetitia=# \set PROMPT1 '%l '
1 \set PROMPT2 '%l '
1 select
2 *
3 from
4 test
5 ;
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available
since Postgres 9.5.
	</div>
