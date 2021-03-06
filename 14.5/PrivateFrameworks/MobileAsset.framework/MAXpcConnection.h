//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MAXpcConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSString *_connectionId;
}

@property(readonly, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (_Bool)notValid;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;

@end

