//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScript-Protocol.h>

@class NSString, WKUserScript;
@protocol SWSession;

@interface SWSessionScript : NSObject <SWScript>
{
    id <SWSession> _session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWSession> session; // @synthesize session=_session;
@property(readonly, nonatomic) WKUserScript *userScript;
- (_Bool)queuable;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool queueable;
@property(readonly) Class superclass;

@end

