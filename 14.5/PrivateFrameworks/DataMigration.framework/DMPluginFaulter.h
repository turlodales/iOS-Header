//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataMigration/DMPluginFaulting-Protocol.h>

@class NSString;

@interface DMPluginFaulter : NSObject <DMPluginFaulting>
{
    NSString *_message;
}

+ (id)_selectorNameFromPluginIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)vibrationmigrator;
- (void)tonemigrator;
- (void)timedmigrator;
- (void)smsmigrator;
- (void)siriSiri;
- (void)sbmigrator;
- (void)preferencesInternationalSupportMigrator;
- (void)nanomailclientmigrator;
- (void)musiclibrarymigrator;
- (void)mobilemailmigrator;
- (void)mobilebackupmigrator;
- (void)messageLegacyAccountsMigrator;
- (void)messageAccountsMigrator;
- (void)managedconfigurationmigrator;
- (void)managedconfigurationmdmmigrator;
- (void)managedconfigurationcleanupmigrator;
- (void)locationdmigrator;
- (void)languageassetmigrator;
- (void)keyboardsuimigrator;
- (void)keyboardsmigrator;
- (void)iTunesStoremigrator;
- (void)facetimemigrator;
- (void)dataaccessmigratorlegacy;
- (void)dataaccessmigrator;
- (void)coreaudioHAENDataMigrator;
- (void)cloudrecentsmigrator;
- (void)certuimigrator;
- (void)calendarmigrator;
- (void)appleaccountmigrator;
- (void)appleaccountmergebuddyprovisioningresponsemigrator;
- (void)appleaccountmergeandremovemobilemeaccountsmigrator;
- (void)appleaccountlegacymigrator;
- (void)appleaccountappleidaccountmigrator;
- (void)airtrafficmigrator;
- (void)addressbookmigrator;
- (void)accountsobsolescencemigrator;
- (void)accountsmigrator;
- (void)accountsettingsmigrator;
- (void)WiFiDataMigrator;
- (void)WebBookmarksmigrator;
- (void)Weather;
- (void)VoiceShortcutsShortcutsMigrator;
- (void)VideosMigrator;
- (void)StocksMigrator;
- (void)SoftwareUpdateBridge;
- (void)PreferencesMigrator;
- (void)PassbookDataMigrator;
- (void)NanoHealthMigrator;
- (void)NanoAudioControlMigrator;
- (void)MobileSlideShow;
- (void)MobileSafarimigrator;
- (void)MobileInstallationSystemAppMigrator;
- (void)MobileInstallationAppUserDataMigrator;
- (void)MobileGestaltMobileGestaltMigrator;
- (void)MobileContainerManagerContainerMigrator;
- (void)MobileAsset;
- (void)MapsDataClassMigratormigrator;
- (void)MSUDataMigrator;
- (void)MKBMigrator;
- (void)LaunchServicesMigrator;
- (void)HomeKitMigrator;
- (void)HealthMigrator;
- (void)CookieDataMigratormigrator;
- (void)CommCenterMigrator;
- (void)CloudTabsMigratormigrator;
- (void)CallHistoryDataMigrator;
- (void)BuddyMigrator;
- (void)AnisetteMigrator;
- (void)AccessibilityAccessibilityDataMigration;
- (void)_fault;
- (void)faultWithPluginIdentifier:(id)arg1 message:(id)arg2;

@end

