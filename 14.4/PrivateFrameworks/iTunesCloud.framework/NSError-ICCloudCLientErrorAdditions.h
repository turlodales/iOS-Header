//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (ICCloudCLientErrorAdditions)
+ (id)ic_cloudClientLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ic_cloudClientErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ic_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3 underlyingError:(id)arg4;
+ (id)ic_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (id)ic_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
@property(readonly) NSError *ic_underlyingError;
@end

