//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/CRKASMRosterProviderDecoratorBase.h>

@class NSSet, NSURL;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives, CRKKeyedDataStoreProtocol;

@interface CRKASMPreemptiveIDSMessagingRosterProvider : CRKASMRosterProviderDecoratorBase
{
    _Bool _observingRoster;
    id <CRKIDSPrimitives> _IDSPrimitives;
    id <CRKIDSAddressTranslator> _IDSAddressTranslator;
    id <CRKKeyedDataStoreProtocol> _dataStore;
    NSURL *_messagedAppleIDsURL;
    NSSet *_messagedAppleIDs;
}

+ (id)observedKeyPaths;
+ (id)trustedUserAppleIDsFromRoster:(id)arg1;
+ (id)appleIDsFromData:(id)arg1 error:(id *)arg2;
+ (id)dataForAppleIDs:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isObservingRoster) _Bool observingRoster; // @synthesize observingRoster=_observingRoster;
@property(retain, nonatomic) NSSet *messagedAppleIDs; // @synthesize messagedAppleIDs=_messagedAppleIDs;
@property(readonly, nonatomic) NSURL *messagedAppleIDsURL; // @synthesize messagedAppleIDsURL=_messagedAppleIDsURL;
@property(readonly, nonatomic) id <CRKKeyedDataStoreProtocol> dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) id <CRKIDSAddressTranslator> IDSAddressTranslator; // @synthesize IDSAddressTranslator=_IDSAddressTranslator;
@property(readonly, nonatomic) id <CRKIDSPrimitives> IDSPrimitives; // @synthesize IDSPrimitives=_IDSPrimitives;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endObservingRoster;
- (void)beginObservingRoster;
- (void)messageAppleID:(id)arg1;
- (_Bool)persistAppleIDs:(id)arg1 withError:(id *)arg2;
- (id)fetchMessagedAppleIDsWitherror:(id *)arg1;
- (void)rosterDidChange;
- (id)initWithRosterProvider:(id)arg1 IDSPrimitives:(id)arg2 IDSAddressTranslator:(id)arg3 dataStore:(id)arg4;
- (void)dealloc;

@end

