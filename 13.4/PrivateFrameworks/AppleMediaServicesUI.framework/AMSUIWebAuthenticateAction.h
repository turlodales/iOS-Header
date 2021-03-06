//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebActionRunnable-Protocol.h>

@class AMSAuthenticateRequest, AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebAuthenticateAction : NSObject <AMSUIWebActionRunnable>
{
    _Bool _makeCurrentAccount;
    _Bool _pauseTimeouts;
    AMSAuthenticateRequest *_request;
    AMSUIWebClientContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pauseTimeouts; // @synthesize pauseTimeouts=_pauseTimeouts;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AMSAuthenticateRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool makeCurrentAccount; // @synthesize makeCurrentAccount=_makeCurrentAccount;
- (id)runAction;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

