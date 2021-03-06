//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, VNCanceller;

@protocol VNClustererModelBuilding
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 andRemovingFaces:(NSArray *)arg3 canceller:(VNCanceller *)arg4 error:(id *)arg5;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 andRemovingFaces:(NSArray *)arg2 canceller:(VNCanceller *)arg3 error:(id *)arg4;
- (NSData *)saveAndReturnCurrentModelState:(id *)arg1;
- (_Bool)resetModelState:(NSData *)arg1 error:(id *)arg2;

@optional
- (NSArray *)updateModelByRemovingFaces:(NSArray *)arg1 canceller:(VNCanceller *)arg2 error:(id *)arg3;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 canceller:(VNCanceller *)arg3 error:(id *)arg4;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 canceller:(VNCanceller *)arg2 error:(id *)arg3;
@end

