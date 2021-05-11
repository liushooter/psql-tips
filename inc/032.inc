    <div class="tip" name="32">
      The <code>-t</code> or <code>--tuples-only</code> flag will
      turn off printing column names and result row count footers.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select * from test;'
 id | value 
----&#43;-------
  1 | test
(1 row)

laetitia:~$ psql -c 'select * from test;' -t
  1 | test</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
