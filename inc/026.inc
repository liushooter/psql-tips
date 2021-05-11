    <div class="tip" name="26">
      The <code>-L filename</code> or
      <code>--log-file=filename</code> flag will write all query
      output into file filename in addition to the normal output
      destination.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select * from test;' -L output.log
 id | value 
----&#43;-------
  1 | test
(1 row)

laetitia:~$ cat output.log 
********* QUERY **********
select * from test;
**************************

 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since Postgres 8.1.
    </div>
