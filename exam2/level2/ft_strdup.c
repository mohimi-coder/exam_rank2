char    *ft_strdup(const char *src)
{
    char    *dst;
    size_t    len;
    size_t    i;

    len = ft_strlen(src);
    dst = (char *) malloc(sizeof(char) * (len + 1));
    if (dst == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}
int main()
{
    const char *mine = "mohamed himi";
    char *theirs;
    theirs = ft_strdup(mine);
    printf("mine: %s\n", mine);
    printf("theirs: %s\n", theirs);
}
