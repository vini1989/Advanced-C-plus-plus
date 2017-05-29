#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <boost/asio/io_service.hpp>
#include <boost/asio/ip/udp.hpp>



class UdpClient {
private:
	std::string m_address;
	int m_roleId;
	int m_taskId;
	boost::asio::ip::udp::endpoint m_receiver_endpoint;
	boost::asio::ip::udp::socket m_socket;
	boost::asio::io_service m_io_service;
	boost::asio::ip::udp::endpoint m_sender_endpoint;
	std::array<char, 128> recv_buf;


public:
	
	UdpClient(std::string address, boost::asio::io_service &io_service);
	
	void roleMenu();

	void showStudentMenu();

	void addStudent();

	void getAllStudentDetail();

	void connectToServer();

	void getStudent();
};