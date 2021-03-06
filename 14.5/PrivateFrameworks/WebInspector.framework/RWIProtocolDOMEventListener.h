//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool hasBreakpoint;
@property(nonatomic) _Bool disabled;
@property(nonatomic) _Bool once;
@property(nonatomic) _Bool passive;
@property(copy, nonatomic) NSString *handlerName;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property(nonatomic) _Bool onWindow;
@property(nonatomic) int nodeId;
@property(nonatomic) _Bool isAttribute;
@property(nonatomic) _Bool useCapture;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) int eventListenerId;
- (id)initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(_Bool)arg3 isAttribute:(_Bool)arg4;

@end

