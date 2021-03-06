//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class AppInstall, AppPackage;

@interface AppInstallPostambleTask : Task
{
    long long _automaticType;
    AppInstall *_install;
    long long _restoreType;
    long long _sourceType;
    long long _updateType;
    AppPackage *_package;
}

+ (id)operationForInstallID:(long long)arg1 packageID:(long long)arg2 inSession:(id)arg3;
- (void).cxx_destruct;
- (void)_writeReceipt;
- (void)_recordBusinessMetrics;
- (void)_cleanDownloadFolder;
- (void)main;
- (id)_initWithInstall:(id)arg1 package:(id)arg2;

@end

