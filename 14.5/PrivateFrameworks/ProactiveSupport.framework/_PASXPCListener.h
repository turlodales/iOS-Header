//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSXPCListenerDelegate;

@interface _PASXPCListener : NSObject
{
    id <NSXPCListenerDelegate> _delegate;
    NSString *_serviceName;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) id <NSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3;
- (id)init;

@end

