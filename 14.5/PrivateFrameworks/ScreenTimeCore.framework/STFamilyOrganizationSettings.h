//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

#import <ScreenTimeCore/STSerializableMappedObject-Protocol.h>
#import <ScreenTimeCore/STVersionVectorable-Protocol.h>

@class NSData, NSString, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>
{
}

+ (id)serializableClassName;
- (id)redactedDescription;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)setPasscode:(id)arg1;
@property(nonatomic) _Bool isManaged; // @dynamic isManaged;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDirty; // @dynamic isDirty;
@property(retain, nonatomic) STFamilyOrganization *organization; // @dynamic organization;
@property(nonatomic) _Bool shareWebUsage; // @dynamic shareWebUsage;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *versionVector; // @dynamic versionVector;

@end

