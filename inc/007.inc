    <div class="tip" name="7">
      If you use the value <code>-</code> (hyphen) in the flag
      <code>-f</code> or <code>--filename</code>, psql will read
      commands and queries from the standard input. The read will
      end when reaching EOF command (CTRL&#43;D) or the <code>\q</code>
      command.
      <pre><code class="hljs bash">laetitia:~$ psql -f -
laetitia=# select * from test; \q
 id | value 
----&#43;-------
  1 | test
(1 row) </code></pre>This feature is available since Postgres 7.2.
    </div>
