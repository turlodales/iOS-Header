//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSpanMatchResultInterpreterProvider-Protocol.h>

@class CKVSettings, NSString;

@interface CKVSpanMatchResultInterpreterFactory : NSObject <CKVSpanMatchResultInterpreterProvider>
{
    CKVSettings *_settings;
}

- (void).cxx_destruct;
- (id)getInterpreter;
- (id)init;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

