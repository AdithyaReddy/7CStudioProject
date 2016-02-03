//
//  WeatherDataCell.m
//  SevenCStudioProject
//
//  Created by Adithya Reddy on 02/02/16.
//  Copyright © 2016 Adithya Reddy. All rights reserved.
//

#import "WeatherDataCell.h"

@implementation WeatherDataCell

- (void)awakeFromNib {
    
}

- (void) setCellData {
    self.lblCurrentDate = nil;
    self.lblCurrentTemp = nil;
    self.imgViewCurrentWeather = nil;
}

@end
