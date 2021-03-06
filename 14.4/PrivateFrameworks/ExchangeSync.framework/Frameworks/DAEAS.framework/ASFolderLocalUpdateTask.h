//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class ASFolder, NSString;

@interface ASFolderLocalUpdateTask : ASTask
{
    NSString *_previousSyncKey;
    ASFolder *_folder;
    int _commandCode;
    int _requestType;
    CDUnknownBlockType _completionBlock;
    long long _dataclasses;
}

+ (id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long dataclasses; // @synthesize dataclasses=_dataclasses;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1;
- (int)commandCode;
- (id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

