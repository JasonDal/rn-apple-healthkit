//
//  RCTAppleHealthKit+Methods_Body.h
//  RCTAppleHealthKit
//
//  Created by Greg Wilson on 2016-06-26.
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Body)

- (void)body_getAverageWeight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getLatestWeight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getWeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getHourlyWeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getDailyWeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getMonthlyWeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_saveWeight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)body_getAverageBmi:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getLatestBodyMassIndex:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getBmiSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getHourlyBmiSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getDailyBmiSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getMonthlyBmiSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_saveBodyMassIndex:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)body_getAverageHeight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getLatestHeight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getHeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getHourlyHeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getDailyHeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getMonthlyHeightSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_saveHeight:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)body_getLatestBodyFatPercentage:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getBodyFatPercentageSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_saveBodyFatPercentage:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)body_getLatestLeanBodyMass:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_getLeanBodyMassSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)body_saveLeanBodyMass:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
