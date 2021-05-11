    <div class="tip" name="2">
      You can combine several <code>-c</code> or
      <code>--command=command</code> flags to execute several
      commands or queries.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select count(*) from test;' -c 'select
* from test;'
 count 
-------
     1
(1 row)

 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
