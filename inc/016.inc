    <div class="tip" name="16">
      Using the <code>-e</code> or <code>--echo-queries</code> will
      display the query just before the query result in the
      standard output.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -e -c 'select * from test;'
select * from test;
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
