    <div class="tip" name="5">
      Use <code>-f filename</code> or <code>--file=filename</code>
      to play queries from a file.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
select * from test;
laetitia:~$ psql -f query.sql
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
