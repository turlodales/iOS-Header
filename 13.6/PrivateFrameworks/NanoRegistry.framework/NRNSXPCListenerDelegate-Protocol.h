//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NSObject-Protocol.h>

@protocol NRNSXPCConnectionProtocol, NRNSXPCListenerProtocol;

@protocol NRNSXPCListenerDelegate <NSObject>

@optional
- (_Bool)listener:(id <NRNSXPCListenerProtocol>)arg1 shouldAcceptNewConnection:(id <NRNSXPCConnectionProtocol>)arg2;
@end

