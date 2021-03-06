//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;

@interface CRKClassKitChangeNotifier : NSObject
{
    id <CRKClassKitChangeNotifierDelegate> _delegate;
    NSObject<CRKClassKitRosterRequirements> *_requirements;
    id _generalObserverToken;
    id _trustedPersonObserverToken;
    NSSet *_observedTrustedPersonIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *observedTrustedPersonIDs; // @synthesize observedTrustedPersonIDs=_observedTrustedPersonIDs;
@property(retain, nonatomic) id trustedPersonObserverToken; // @synthesize trustedPersonObserverToken=_trustedPersonObserverToken;
@property(retain, nonatomic) id generalObserverToken; // @synthesize generalObserverToken=_generalObserverToken;
@property(readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // @synthesize requirements=_requirements;
@property(nonatomic) __weak id <CRKClassKitChangeNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (id)trustedPersonIDsInRoster:(id)arg1;
- (void)dataChanged;
- (CDUnknownBlockType)makeObserverBlock;
- (void)stopObservingTrustedPersons;
- (void)stopObservingGeneralChanges;
- (void)startObservingGeneralChanges;
- (_Bool)updateObservedTrustedPersonIDsWithRoster:(id)arg1;
- (id)initWithRequirements:(id)arg1;
- (void)dealloc;

@end

