FROM nginx:1.11.5

COPY nginx.conf /etc/nginx/
COPY ./docker-entrypoint.sh /

ENTRYPOINT ["/docker-entrypoint.sh"]
CMD ["nginx-daemon"]
