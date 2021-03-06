//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGConfigurationSource-Protocol.h>

@class NSString, PGTrialSession;

@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource>
{
    unsigned short _namespaceType;
    PGTrialSession *_trialSession;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned short namespaceType; // @synthesize namespaceType=_namespaceType;
@property(retain, nonatomic) PGTrialSession *trialSession; // @synthesize trialSession=_trialSession;
- (id)objectForKey:(id)arg1;
- (id)initWithTrialSession:(id)arg1 namespaceType:(unsigned short)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

