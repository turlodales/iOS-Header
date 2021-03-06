//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UpdateMigratorConfigurationStore : NSObject
{
    NSMutableDictionary *_configuration;
}

- (void).cxx_destruct;
- (id)_writeConfigurationToUserDefaultsRepresentation:(id)arg1;
- (id)_readConfigurationFromUserDefaultsRepresentation:(id)arg1;
- (void)writeConfiguration:(id)arg1;
- (void)willBeginMigratorType:(id)arg1;
- (void)synchronize;
- (_Bool)hasMigrations;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)didCompleteMigratorType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

