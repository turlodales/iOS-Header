//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingCore/HCDatabaseManager.h>

@interface PADatabaseManager : HCDatabaseManager
{
}

+ (id)sharedManager;
- (id)currentConfiguration;
- (_Bool)saveConfiguration:(id)arg1;
- (void)contentDidUpdate:(id)arg1;
- (void)logMessage:(id)arg1;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)managedObjectModelName;

@end

