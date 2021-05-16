    <div class="tip" name="8">
      Using the <code>-f</code> or <code>--filename</code> flag
      will allow to get useful information as error messages with
      line numbers.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
select count(*) from test;

test;

select * from test;
laetitia:~$ psql -f query.sql
 count 
-------
     1
(1 row)

psql:query.sql:3: ERROR:  syntax error at or near "test"
LINE 1: test;
        ^
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since Postgres 7.2.
    </div>
