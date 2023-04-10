#pragma once


class Solution {

public:
    string addBinary(string a, string b)
    {

        int secondLength = (int)(a.length() - b.length());

        if (secondLength > 0)
        {
            b.insert(0, string(secondLength, '0'));
        }
        else if (secondLength < 0)
        {
            a.insert(0, string(std::abs(secondLength), '0'));
        }

        char transport = '0';
        string aux = "";

        for (auto i = (int)a.length() - 1; i >= 0; --i)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                aux.insert(0, 1, transport);
                transport = '1';
            }
            else if (a[i] == '1' || b[i] == '1')
            {
                aux.insert(0, 1, transport == '1' ? '0' : '1');
            }
            else
            {
                aux.insert(0, 1, transport);
                transport = '0';
            }
        }
        if (transport == '1')
        {
            aux.insert(0, 1, transport);
        }
        return aux;
    }
};