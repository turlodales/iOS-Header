//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SigCrop : NSObject
{
}

+ (_Bool)FillUnknownError:(id *)arg1;
+ (_Bool)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;
+ (_Bool)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;
+ (id)cropSignature:(id)arg1 atPosition:(double)arg2 withLength:(double)arg3 error:(id *)arg4;
+ (double)signatureLength:(id)arg1 error:(id *)arg2;

@end

