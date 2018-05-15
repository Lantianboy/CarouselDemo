//
//  WebSocket.h
//  WebSocket
//
//  Created by xm6leefun on 2018/5/15.
//  Copyright © 2018年 xm6leefun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SocketRocket.h>


extern NSString * const kNeedPayOrderNote;
extern NSString * const kWebSocketDidOpenNote;
extern NSString * const kWebSocketDidCloseNote;
extern NSString * const kWebSocketdidReceiveMessageNote;


@interface WebSocket : NSObject

+ (WebSocket *)instance;
// 获取连接状态
@property (nonatomic,assign,readonly) SRReadyState socketReadyState;

-(void)SRWebSocketOpenWithURLString:(NSString *)urlString;//开启连接
-(void)SRWebSocketClose;//关闭连接
- (void)sendData:(id)data;//发送数据


@end
