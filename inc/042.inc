    <div class="tip" name="42">
      The <code>-W</code> or <code>--password</code> is set for the
      entire session. Should you try a connection in psql using the
      <code>\c</code> command will still ask for a password even if
      it's useless.
      <pre><code class=
      "hljs bash">laetitia:~$ sudo cat /usr/local/pgsql/data/pg_hba.conf
# TYPE  DATABASE        USER            ADDRESS                 METHOD

# "local" is for Unix domain socket connections only
local   all             all                                     trust
# IPv4 local connections:
host    all             all             127.0.0.1/32            trust
# IPv6 local connections:
host    all             all             ::1/128                 trust
# Allow replication connections from localhost, by a user with the
# replication privilege.
local   replication     all                                     trust
host    replication     all             127.0.0.1/32            trust
host    replication     all             ::1/128                 trust
laetitia:~$ psql -W
Password: 
psql (14devel)
Type "help" for help.

laetitia=# \c postgres
Password: 
You are now connected to database "postgres" as user "laetitia".
postgres=# </code></pre>This feature is available since at least
Postgres 7.1.
    </div>
