//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/AFUIBugReporting-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol AFUIBugReportingDelegate;

@interface AFUITapToRadarManager : NSObject <AFUIBugReporting>
{
    id <AFUIBugReportingDelegate> _delegate;
    NSString *_hostname;
    NSString *_lastUserText;
    NSString *_siriLanguage;
    NSArray *_contextCollectorsInfo;
    NSMutableDictionary *_tapToRadarParameters;
    NSMutableArray *_attachmentPaths;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_attachmentPaths) NSMutableArray *attachmentPaths; // @synthesize attachmentPaths=_attachmentPaths;
@property(retain, nonatomic, getter=_tapToRadarParameters) NSMutableDictionary *tapToRadarParameters; // @synthesize tapToRadarParameters=_tapToRadarParameters;
@property(copy, nonatomic, getter=_contextCollectorsInfo) NSArray *contextCollectorsInfo; // @synthesize contextCollectorsInfo=_contextCollectorsInfo;
@property(copy, nonatomic, getter=_siriLanguage) NSString *siriLanguage; // @synthesize siriLanguage=_siriLanguage;
@property(copy, nonatomic, getter=_lastUserText) NSString *lastUserText; // @synthesize lastUserText=_lastUserText;
@property(copy, nonatomic, getter=_hostname) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) __weak id <AFUIBugReportingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setDefaultParameterValues;
- (void)attachFileAtPath:(id)arg1 image:(_Bool)arg2;
- (void)attachData:(id)arg1 name:(id)arg2 mimeType:(id)arg3;
- (unsigned long long)maximumAttachmentSize;
- (void)setIncludeSysdiagnosesFromDevices:(id)arg1;
- (void)setKeywordIdentifiers:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setComponentName:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3;
- (void)composeBugReport;
- (_Bool)canReportBugs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

