//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHLocalStoreDelegate-Protocol.h>
#import <ShazamKit/SHMatcher-Protocol.h>

@class NSMutableArray, NSString, SHLocalStore, SHMRESignatureMatcher, SHMutableSignature;
@protocol SHMatcherDelegate;

__attribute__((visibility("hidden")))
@interface SHLiveMatcher : NSObject <SHLocalStoreDelegate, SHMatcher>
{
    id <SHMatcherDelegate> delegate;
    SHLocalStore *_localStore;
    SHMRESignatureMatcher *_mreMatcher;
    SHMutableSignature *_mutableSignature;
    NSMutableArray *_referenceSignagures;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *referenceSignagures; // @synthesize referenceSignagures=_referenceSignagures;
@property(retain, nonatomic) SHMutableSignature *mutableSignature; // @synthesize mutableSignature=_mutableSignature;
@property(retain, nonatomic) SHMRESignatureMatcher *mreMatcher; // @synthesize mreMatcher=_mreMatcher;
@property(retain, nonatomic) SHLocalStore *localStore; // @synthesize localStore=_localStore;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (void)buildMREForSignatures:(id)arg1;
- (void)bufferProduced:(id)arg1 atTime:(id)arg2;
- (void)matchSignature:(id)arg1;
- (id)buildRollingSignature;
- (id)initWithLiveStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

