    <div class="tip" name="27">
      The <code>-o filename</code> or
      <code>--output=filename</code> flag will write all query
      output into file filename.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select * from test;' -o output.log
laetitia:~$ cat output.log 
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
