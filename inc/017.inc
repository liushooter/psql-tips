    <div class="tip" name="17">
      Using twice a <code>-c</code> or <code>--command</code> flag
      will display the result of both commands whereas feeding a
      string with two queries to a <code>-c</code> or
      <code>--command</code> flag will only display the result of
      the last one.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select count(*) from test; select * from test;'
 id | value 
----&#43;-------
  1 | test
(1 row)

laetitia:~$ psql -c 'select count(*) from test;' -c ' select * from test;'
 count 
-------
     1
(1 row)

 id | value 
----&#43;-------
  1 | test
(1 row) </code></pre>This feature is available since at least Postgres 7.1.
    </div>
