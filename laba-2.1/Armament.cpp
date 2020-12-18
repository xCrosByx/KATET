#include "Armament.h"

void Armament::get_manufacturer_country(string country)
{
    manufacturer_country = country;
}

void Armament::get_name_of_armament(string name)
{
    name_of_armament = name;
}

void Armament::get_cost(int price)
{
    cost = price;
}

void Technics::get_number_of_people(int quantity)
{
    number_of_people = quantity;
}

void Technics::get_fuel_quantity(int liter)
{
    fuel_quantity = liter;
}

void Ship::get_displacement(int volume)
{
    displacement = volume;
}

void Battle_ship::view()
{
    setlocale(LC_ALL, "ru");
    cout << "������ �������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "������������� (�) : " << displacement << endl;
    cout << "������ : " << number_of_people << endl;
    cout << "����� ������� (�) : " << fuel_quantity << endl;
    cout << "��������� $ : " << cost << endl;
}

void Plan::get_max_height(double height)
{
    max_height = height;
}

void Plan::get_max_speed(int speed)
{
    max_speed = speed;
}

void Battle_plan::view()
{
    setlocale(LC_ALL, "ru");
    cout << "������ ������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "������������ ������ (��) : " << max_height << endl;
    cout << "������������ �������� (��/�) : " << max_speed << endl;
    cout << "������ : " << number_of_people << endl;
    cout << "����� ������� (��) : " << fuel_quantity << endl;
    cout << "��������� $ : " << cost << endl;
}

void Car::get_number_of_wheels(int quntity)
{
    number_of_wheels = quntity;
}

void Car::get_weght(double mass)
{
    weght = mass;
}

void Battle_car::view()
{
    setlocale(LC_ALL, "ru");
    cout << "�����-����������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "���������� ���� : " << number_of_wheels << endl;
    cout << "����� (�) : " << weght << endl;
    cout << "������ : " << number_of_people << endl;
    cout << "����� ������� (�) : " << fuel_quantity << endl;
    cout << "��������� $ : " << cost << endl;
}


void Firearm::get_caliber(double number)
{
    caliber = number;
}

void Firearm::get_ammunition(int quantity)
{
    ammunition = quantity;
}

void Firearm::get_weight_gramm(int weight)
{
    weight_gramm = weight;
}

void Firearm::get_starting_speed(int speed)
{
    starting_speed = speed;
}

void Assault_rifle::get_rate_of_fire(int quantity)
{
    rate_of_fire = quantity;
}

void Assault_rifle::view()
{
    setlocale(LC_ALL, "ru");
    cout << "�������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "������ (��) : " << caliber << endl;
    cout << "���������������� (�����/���) : " << rate_of_fire << endl;
    cout << "��������� �������� ���� (�/�) : " << starting_speed << endl;
    cout << "������ �������� : " << ammunition << endl;
    cout << "����� (��) : " << weight_gramm << endl;
    cout << "��������� $ : " << cost << endl;
}

void Rifle::get_range_of_defeat(int range)
{
    range_of_defeat = range;
}

void Rifle::view()
{
    setlocale(LC_ALL, "ru");
    cout << "��������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "������ (��) : " << caliber << endl;
    cout << "������������ ��������� ��������� (��) : " << range_of_defeat << endl;
    cout << "��������� �������� ���� (�/�) : " << starting_speed << endl;
    cout << "������ �������� : " << ammunition << endl;
    cout << "����� (��) : " << weight_gramm << endl;
    cout << "��������� $ : " << cost << endl;
}

void Explosive_device::Grenade::view()
{
    setlocale(LC_ALL, "ru");
    cout << "�������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "������ ������ �������� (�) : " << affected_area << endl;
    cout << "��������� $ : " << cost << endl;
}

void Explosive_device::Grenade::get_affected_area(int radius)
{
    affected_area = radius;
}

void Grenade_launcher::view()
{
    setlocale(LC_ALL, "ru");
    cout << "���������\n";
    cout << "������������ : " << name_of_armament << endl;
    cout << "������ ������������� : " << manufacturer_country << endl;
    cout << "������ (��) : " << caliber << endl;
    cout << "������������ ��������� ��������� (��) : " << range_of_defeat << endl;
    cout << "������ ������ �������� (�) : " << affected_area << endl;
    cout << "��������� �������� ������� (�/�) : " << starting_speed << endl;
    cout << "������ �������� : " << ammunition << endl;
    cout << "����� (��) : " << weight_gramm << endl;
    cout << "��������� $ : " << cost << endl;
}

void Grenade_launcher::get_affected_area_of_grenade_launcher(int radius)
{
    get_affected_area(radius);
}
