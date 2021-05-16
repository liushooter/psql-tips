    <div class="tip" name="37">
      You can use variables in psql in non-interactive mode. the
      flag <code>-v assignment</code> or
      <code>--set=assignment</code> or
      <code>--variable=assignment</code>.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql 
select * from :tablename;
laetitia:~$ psql -v tablename=test -f query.sql 
 id | value 
----&#43;-------
  1 | test
(1 row)

laetitia:~$ cat query2.sql 
select * from test where value = :'var';
ilaetitia:~$ psql --set var=test -f query2.sql 
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
