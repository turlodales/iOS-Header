//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NEIKEv2RequestContext : NSObject
{
    _Bool _requestInitiator;
    int _requestType;
}

@property(nonatomic) _Bool requestInitiator; // @synthesize requestInitiator=_requestInitiator;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
- (void)sendCallbackSuccess:(_Bool)arg1 session:(id)arg2;
- (id)description;
- (id)initWithRequestType:(int)arg1;

@end

