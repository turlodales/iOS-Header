//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VCDatabaseProvider;

@interface WFShareSheetWorkflowProvider : NSObject
{
    id <VCDatabaseProvider> _databaseProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1;
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithDatabaseProvider:(id)arg1;

@end

