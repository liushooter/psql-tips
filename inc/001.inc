    <div class="tip" name="1">
      If you want to simply send a single line command to psql and
      exit, try using the <code>-c</code> or
      <code>--command=command</code> flag.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select * from test;'
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
