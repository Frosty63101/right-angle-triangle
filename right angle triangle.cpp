#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
	std::string ra;

	std::string rb;

	std::string rc;

	int rt;

	double ria{};

	double rib{};

	double ric;


    std::
        cout <<
        "enter values for a b c (enter a, b or c for unknown values)\n";

    std::cin >> ra;

    std::cin >> rb;

    std::cin >> rc;

    std::cout << "enter 1 for 30-60-90 and 2 for 45-45-90 \n";

    std::cin >> rt;

    if (rt == 1) {

        if (ra == "a") {

            if (rb == "b") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                ria = ric / 2;

                std::cout << "a = " << ria << " b = " << (ria *
                    sqrt(3)) <<
                    " c = " << ric;

            }
            else if (rc == "c") {

                stringstream ss;

                ss << rb;

                ss >> rib;

                ria = rib / sqrt(3);

                std::
                    cout << "a = " << ria << " b = " << rib << " c = " <<
                    (ria * 2);

            }
            else if (ra == "a") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                ria = ric / 2;

                std::cout << "a = " << ria << " b = " << (ria *
                    sqrt(3)) <<
                    " c = " << ric;

            }

        }
        else if (rb == "b") {

            if (rc == "c") {

                stringstream ss;

                ss << ra;

                ss >> ria;

                rib = ria * sqrt(3);

                std::
                    cout << "a = " << ria << " b = " << rib << " c = " <<
                    (ria * 2);

            }
            else if (ra == "a") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                ria = ric / 2;

                std::cout << "a = " << ria << " b = " << (ria *
                    sqrt(3)) <<
                    " c = " << ric;

            }
            else if (rb == "b") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                ria = ric / 2;

                std::cout << "a = " << ria << " b = " << (ria *
                    sqrt(3)) <<
                    " c = " << ric;

            }

        }
        else if (rc == "c") {

            if (rb == "b") {

                stringstream ss;

                ss << ra;

                ss >> ria;

                rib = ria * sqrt(3);

                std::
                    cout << "a = " << ria << " b = " << rib << " c = " <<
                    ria * 2;

            }
            else if (ra == "a") {

                stringstream ss;

                ss << rb;

                ss >> rib;

                ria = rib / sqrt(3);

                std::
                    cout << "a = " << ria << " b = " << rib << " c = " <<
                    (ria * 2);

            }
            else if (rc == "c") {

                stringstream ss;

                ss << ra;

                ss >> ria;

                rib = ria * sqrt(3);

                std::
                    cout << "a = " << ria << " b = " << rib << " c = " <<
                    (ria * 2);

            }

        }

    }

    if (rt == 2) {

        if (ra == "a") {

            if (rb == "b") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                ria = ric / sqrt(2);

                std::
                    cout << "a = " << ria << " b = " << ria << " c = " <<
                    ric;

            }
            else if (rc == "c") {

                stringstream ss;

                ss << rb;

                ss >> rib;

                std::
                    cout << "a = " << rib << " b = " << rib << " c = " <<
                    (rib * sqrt(2));

            }
            else if (ra == "a") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                ria = ric / 2;

                std::
                    cout << "a = " << rib << " b = " << rib << " c = " <<
                    ric;

            }

        }
        else if (rb == "b") {

            if (rc == "c") {

                stringstream ss;

                ss << ra;

                ss >> ria;

                std::
                    cout << "a = " << ria << " b = " << ria << " c = " <<
                    (ria * sqrt(2));

            }
            else if (ra == "a") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                rib = ric / sqrt(2);

                std::
                    cout << "a = " << rib << " b = " << rib << " c = " <<
                    ric;

            }
            else if (rb == "b") {

                stringstream ss;

                ss << rc;

                ss >> ric;

                std::
                    cout << "a = " << ria << " b = " << ria << " c = " <<
                    ric;

            }

        }
        else if (rc == "c") {

            if (rb == "b") {

                stringstream ss;

                ss << ra;

                ss >> ria;

                std::
                    cout << "a = " << ria << " b = " << ria << " c = " <<
                    (ria * sqrt(2));

            }
            else if (ra == "a") {

                stringstream ss;

                ss << rb;

                ss >> rib;

                std::
                    cout << "a = " << rib << " b = " << rib << " c = " <<
                    (rib * sqrt(2));

            }
            else if (rc == "c") {

                stringstream ss;

                ss << ra;

                ss >> ria;

                rib = ria * sqrt(3);

                std::
                    cout << "a = " << ria << " b = " << ria << " c = " <<
                    (ria * sqrt(2)) << "\n";

            }

        }

    }