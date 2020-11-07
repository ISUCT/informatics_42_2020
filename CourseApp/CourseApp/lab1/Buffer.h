#ifndef INFORMATICS_42_2020_BUFFER_H
#define INFORMATICS_42_2020_BUFFER_H

class Buffer
{
private:
    char **buffer;
    int width;
    int height;

public:
    Buffer(int width, int height)
    {
        this->width = width;
        this->height = height;

        this->buffer = new char*[height];
        for (int y = 0; y < height; y++)
            this->buffer[y] = new char[width];

        this->clear();
    }

    ~Buffer()
    {
        for (int y = 0; y < this->height; y++)
            delete[] this->buffer[y];

        delete[] this->buffer;
    }

    void put(char c, int x, int y)
    {
        this->buffer[y][x] = c;
    }

    char get(int x, int y)
    {
        return this->buffer[y][x];
    }

    void clear()
    {
        for (int i = 0; i < this->height; i++)
        {
            for (int j = 0; j < this->width; j++)
            {
                this->buffer[j][i] = ' ';
            }
        }
    }

    int getWidth() const
    {
        return this->width;
    }

    int getHeight() const
    {
        return this->height;
    }
};

#endif //INFORMATICS_42_2020_BUFFER_H
