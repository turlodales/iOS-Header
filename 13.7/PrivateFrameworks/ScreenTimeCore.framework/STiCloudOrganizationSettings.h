//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class NSString, STiCloudOrganization;

__attribute__((visibility("hidden")))
@interface STiCloudOrganizationSettings : STCoreOrganizationSettings
{
}

- (void)setPasscode:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

// Remaining properties
@property(retain, nonatomic) STiCloudOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *recoveryAltDSID; // @dynamic recoveryAltDSID;

@end

